#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double D;
    int Rh, Rv;

    const double r_w = 16.0;
    const double r_h = 9.0;
    const double d_f = sqrt(r_w * r_w + r_h * r_h); // sqrt(337)

    while (true)
    {
        cin >> D >> Rh >> Rv;
        if (D == 0 && Rh == 0 && Rv == 0) break;

        double W = (r_w * D) / d_f; // width in inches
        double H = (r_h * D) / d_f; // height in inches

        double dpi_h = Rh / W;
        double dpi_v = Rv / H;

        cout << fixed << setprecision(2);
        cout << "Horizontal DPI: " << dpi_h << "\n";
        cout << "Vertical DPI: " << dpi_v << "\n";
    }
}
