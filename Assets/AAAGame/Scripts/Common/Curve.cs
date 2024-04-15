using System;


[Serializable]
public class Curve
{

    public CurveType curveType;
    public CurveDir curveDir;

    public static Curve LinearIn { get { return new Curve(CurveType.Linear, CurveDir.In); } }
    public static Curve LinearOut { get { return new Curve(CurveType.Linear, CurveDir.Out); } }
    public static Curve QuadraticIn { get { return new Curve(CurveType.Quadratic, CurveDir.In); } }
    public static Curve QuadraticOut { get { return new Curve(CurveType.Quadratic, CurveDir.Out); } }
    public static Curve CubicIn { get { return new Curve(CurveType.Cubic, CurveDir.In); } }
    public static Curve CubicOut { get { return new Curve(CurveType.Cubic, CurveDir.Out); } }
    public static Curve QuarticIn { get { return new Curve(CurveType.Quartic, CurveDir.In); } }
    public static Curve QuarticOut { get { return new Curve(CurveType.Quartic, CurveDir.Out); } }
    public static Curve QuinticIn { get { return new Curve(CurveType.Quintic, CurveDir.In); } }
    public static Curve QuinticOut { get { return new Curve(CurveType.Quintic, CurveDir.Out); } }
    public static Curve QuadraticDoubleIn { get { return new Curve(CurveType.QuadraticDouble, CurveDir.In); } }
    public static Curve QuadraticDoubleOut { get { return new Curve(CurveType.QuadraticDouble, CurveDir.Out); } }
    public static Curve CubicDoubleIn { get { return new Curve(CurveType.CubicDouble, CurveDir.In); } }
    public static Curve CubicDoubleOut { get { return new Curve(CurveType.CubicDouble, CurveDir.Out); } }
    public static Curve QuarticDoubleIn { get { return new Curve(CurveType.QuarticDouble, CurveDir.In); } }
    public static Curve QuarticDoubleOut { get { return new Curve(CurveType.QuarticDouble, CurveDir.Out); } }
    public static Curve QuinticDoubleIn { get { return new Curve(CurveType.QuinticDouble, CurveDir.In); } }
    public static Curve QuinticDoubleOut { get { return new Curve(CurveType.QuinticDouble, CurveDir.Out); } }
    public static Curve SineIn { get { return new Curve(CurveType.Sine, CurveDir.In); } }
    public static Curve SineOut { get { return new Curve(CurveType.Sine, CurveDir.Out); } }
    public static Curve SineDoubleIn { get { return new Curve(CurveType.SineDouble, CurveDir.In); } }
    public static Curve SineDoubleOut { get { return new Curve(CurveType.SineDouble, CurveDir.Out); } }
    public static Curve ExpoIn { get { return new Curve(CurveType.Expo, CurveDir.In); } }
    public static Curve ExpoOut { get { return new Curve(CurveType.Expo, CurveDir.Out); } }
    public static Curve ExpoDoubleIn { get { return new Curve(CurveType.ExpoDouble, CurveDir.In); } }
    public static Curve ExpoDoubleOut { get { return new Curve(CurveType.ExpoDouble, CurveDir.Out); } }
    public static Curve ElasticIn { get { return new Curve(CurveType.Elastic, CurveDir.In); } }
    public static Curve ElasticOut { get { return new Curve(CurveType.Elastic, CurveDir.Out); } }
    public static Curve ElasticDoubleIn { get { return new Curve(CurveType.ElasticDouble, CurveDir.In); } }
    public static Curve ElasticDoubleOut { get { return new Curve(CurveType.ElasticDouble, CurveDir.Out); } }
    public static Curve CircIn { get { return new Curve(CurveType.Circ, CurveDir.In); } }
    public static Curve CircOut { get { return new Curve(CurveType.Circ, CurveDir.Out); } }
    public static Curve CircDoubleIn { get { return new Curve(CurveType.CircDouble, CurveDir.In); } }
    public static Curve CircDoubleOut { get { return new Curve(CurveType.CircDouble, CurveDir.Out); } }
    public static Curve BackIn { get { return new Curve(CurveType.Back, CurveDir.In); } }
    public static Curve BackOut { get { return new Curve(CurveType.Back, CurveDir.Out); } }
    public static Curve BackDoubleIn { get { return new Curve(CurveType.BackDouble, CurveDir.In); } }
    public static Curve BackDoubleOut { get { return new Curve(CurveType.BackDouble, CurveDir.Out); } }
    public static Curve BounceIn { get { return new Curve(CurveType.Bounce, CurveDir.In); } }
    public static Curve BounceOut { get { return new Curve(CurveType.Bounce, CurveDir.Out); } }
    public static Curve BounceDoubleIn { get { return new Curve(CurveType.BounceDouble, CurveDir.In); } }
    public static Curve BounceDoubleOut { get { return new Curve(CurveType.BounceDouble, CurveDir.Out); } }
    public Func<float, float> func { get; private set; }
    public Curve(CurveType curveType, CurveDir curveDir)
    {
        this.curveType = curveType;
        this.curveDir = curveDir;
    }
    public Curve(Func<float, float> func)
    {
        this.func = func;
    }

    public Curve Reverse()
    {
        return new Curve(curveType, curveDir == CurveDir.In ? CurveDir.Out : CurveDir.In);
    }
}

