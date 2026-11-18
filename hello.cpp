#include <cstdio>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> v{"cl.exe", "在 Windows runner 上", "真的跑起来了"};
    for (auto& s : v) std::printf("%s ", s.c_str());
    std::printf("\n");

#ifdef _MSC_VER
    std::printf("_MSC_VER = %d\n", _MSC_VER);
#endif
#ifdef _M_X64
    std::printf("目标架构 = x64 (_M_X64)\n");
#endif
    return 0;
}
