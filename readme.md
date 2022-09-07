[![Download](https://img.shields.io/github/v/release/MinamiChiwa/umamusume-localify-zh-CN?color=blue&logoColor=white&label=Download&logo=DocuSign)](https://github.com/MinamiChiwa/Trainers-Legend-G/releases/latest)
[![Chat](https://img.shields.io/badge/Join-QQ%E9%A2%91%E9%81%93-blue?logo=tencent-qq&logoColor=white)](https://qun.qq.com/qqweb/qunpro/share?_wv=3&_wwv=128&inviteCode=1olqdK&from=246610&biz=ka)
[![Discord](https://img.shields.io/discord/973208860217200653?color=blue&label=Discord&logo=Discord&logoColor=white)](https://discord.com/invite/TBCSv5hU69)
# Trainer's Legend G本地化插件(DMM版)
中文 | [English](readme_EN.md)

# 注意

- **本插件内所有翻译内容均属于原翻译者，以任何方式（录制视频、提取文本等）转载或大段搬运译文请注明原译者或译文仓库的[贡献者列表及授权参考列表](https://github.com/MinamiChiwa/Trainers-Legend-G-TRANS/blob/master/translation-progress.md)**

- 此插件在[`umamusume-localify`](https://github.com/GEEKiDoS/umamusume-localify)基础上改善、扩展而成。
- 插件原作者@GEEKiDoS
- 原插件已实现的功能：帧数解锁、分辨率解锁、更换游戏内的文本、自动全屏、将游戏内字体更换为默认字体等。
- 此插件的汉化进度目前为 **部分汉化**
[翻译进度表](https://github.com/MinamiChiwa/Trainers-Legend-G-TRANS/blob/master/translation-progress.md)

- **_!由于本插件涉及到更改游戏文件，可能会有封号风险，本项目及其贡献者均与cygames无关并且不对使用该项目造成账号被ban负责，如果账号因使用此项目被ban请发issue!_**
- **此插件完全免费，若您发现有倒卖此插件的店家请立刻举报。
根据我国《计算机软件保护条例》第十七条规定：“为了学习和研究软件内含的设计思想和原理，通过安装、显示、传输或者存储软件等方式使用软件的，可以不经软件著作权人许可，不向其支付报酬。”您需知晓本插件仅供用户交流学习与研究使用，用户本人下载后不能用作商业或非法用途，需在24小时之内删除，否则后果均由用户承担责任。**
# 赞助
- [`爱发电`](https://afdian.net/@Trainers-Legend-G)
- [`赞助说明及支出明细`](donate_readme.md)
# 贡献及译文

## 翻译者

#### 简体中文

- [`简体中文项目译文仓库`](https://github.com/MinamiChiwa/Trainers-Legend-G-TRANS)

#### 繁体中文

- @yotv2000tw

## 技术支持

- @chinosk114514
- @akemimadoka
- @MiddleRed

# 介绍

### 使用方法

1. 下载发行版`Trainers' Legend G`压缩包，将压缩包内的文件解压至游戏根目录`X:\Umamusume`( **请注意是包含`umamusume.exe`的文件夹** ）
2. 从DMM平台启动游戏

### 更新方法

启动`legend_g_plugin.exe`。

### 设置选项
启动`legend_g_plugin.exe`，进行设置；或直接打开`config.json`进行编辑。
```javascript
{
    "enableConsole": true, /*启用用来输出调试信息的控制台 (true/false)*/
    "enableLogger": false, /*将未覆盖的文本输出到 `dump.txt` (true/false)*/
    "dumpStaticEntries": false, /*需要上一条启用, 在游戏启动时将游戏内硬编码的文本条目输出到 `dump.txt`*/
    "maxFps": 60, /*帧率限制 (-1 = 游戏原版|0 = 无限|>0 = 锁定到特定帧数)——注: 垂直同步已开启*/
    "unlockSize": true, /*允许游戏使用`1080p`以上的分辨率 (true/false)*/
    "uiScale": 1.0, /*自定义UI缩放*/
    "readRequestPack": false, /*是否读取客户端发送包信息，开启此功能可在命令行中输入reboot快速重启游戏(true/false)*/
    "extraAssetBundlePath": "localized_data/umamusumelocalify", /*图片等资源替换包的路径（需要用unity打包，一般情况下请不要改动此项）*/
    "replaceFont": true, /*替换字体，true:用系统默认字体或自定义字体替换；false：使用游戏原字体*/
    "customFontPath": "assets/bundledassets/umamusumelocalify/fonts/MSYH.TTC", /*extraAssetBundlePath项设置的资源包内的字体路径：自定义字体*/
    "customFontSizeOffset": -4, /*字体大小，-4即为减少4*/
    "customFontStyle": 1, /*字体风格，0为正常，1为粗体，2为斜体，3为粗斜体*/
    "customFontLinespacing": 0.9, /*文字行间距，基准值为1.0*/
    "replaceAssets": true, /*是否开启图片等资源替换(true/false)*/
    "assetLoadLog": false, /*是否在debug输出游戏资源调用情况(true/false)*/
    "autoFullscreen": false, /*在屏幕比例对应时自动设置为全屏 (true/false)
                            - 如屏幕是16:9 并且横屏，将会在横屏播放剧情/live时全屏
                            - 如屏幕是9:16，将会在绝大多数情况下全屏*/
    "autoChangeLineBreakMode": true, /*根据横竖屏模式自动切换"忽略换行符"模式*/
    "resolution_start": [-1,-1], /*设置启动时的分辨率, 格式: `array[w, h]`（[-1,-1]为默认）*/
    "aspect_ratio": [16.0,9.0], /*设置UI比例, 格式: `array[w, h]`（没有需求可以不填）*/
    "httpServerPort": 4321,  /*HTTP服务器端口, 用于外部插件交互*/
    "externalPlugin": {  /*外部插件配置。若没有插件, 可直接删除此配置项*/
        "hotkey": "u", /*启动热键, 按下ctrl+设定值启动*/
        "path": "main.exe", /*插件路径*/
        "openExternalPluginOnLoad": false /*启动游戏时自动打开外部插件*/
    },
    "dicts": [ /*将会读取的字典列表` (相对/绝对路径)*/
        "localized_data/event.json", /*育成事件文本*/
        "localized_data/LIVE.json", /*LIVE歌词等*/
        "localized_data/hash_entries.json" /*杂项文本*/
    ],
    "static_dict": "localized_data/static.json", /*static字典文件的路径*/
    "no_static_dict_cache": true, /*是否禁用static字典文件缓存(true/false)*/
    "stories_path": "localized_data/stories", /*剧情文本文件的路径*/
    "text_data_dict": "localized_data/text_data.json", /*文本数据字典文件的路径*/
    "character_system_text_dict": "localized_data/character_system_text.json", /*角色系统文本字典文件的路径*/
    "race_jikkyo_comment_dict": "localized_data/race_jikkyo_comment.json", /*比赛实况评论字典文件的路径*/
    "race_jikkyo_message_dict": "localized_data/race_jikkyo_message.json", /*比赛实况信息字典文件的路径*/ 
    "autoUpdate": {
        "source": "github", /*自动更新的仓库源（gitee或github）*/
        "path": "http://uma.chinosk6.cn/api/get_localify_latest_releases" /*自动更新的抓取地址*/
    },
    "enableBuiltinAutoUpdate": false /*启用内置自动更新*/
}
```



### 自由镜头操作说明

----

##### Live自由镜头

- `WSAD`移动, `Ctrl`下降, `空格`上升, `上下左右`调整视角, `R`复位摄像头

##### 比赛自由镜头

- 通用: `Ctrl`下降, `空格`上升, `Q`/`E` 调整摄像机FOV, `R` 复位摄像头, `F` 切换模式 
- 跟随马娘模式: 
  - `WSAD`调整视角偏移率, `上键`拉远距离, `下键`拉近距离 , `左右`切换视角锁定对象, `V`切换前后视角
- 自由镜头模式: 
  - `WSAD`移动，`上下左右`调整视角



### 已知问题

----

出现崩溃后`%UserProfile%\AppData\LocalLow\Cygames\umamusume` 文件夹下会产生 `Player.log` 文件，里面包含崩溃的具体信息，如果有崩溃的用户能够在崩溃发生后立即上传此文件到仓库的`crash`文件夹内并注明报告使用的插件版本将会对调试有巨大帮助。

- 目前插件仅为部分汉化，很多文本仍未翻译。
- 各种网络连接错误：请检查您的加速器或者梯子，必要时联系相关客服，不要问此项目的贡献者。
- 如果按正常流程安装了插件，却发现所有文本都没汉化，或者仍然停留在旧版本汉化状态，那请检查你的电脑里是否装了两个赛马娘游戏。
- maxFPS设为0时可能会在LIVE中出现眼球锁死的BUG
- maxFPS过大时，部分画面会出现强烈抖动（应该是原本的镜头抖动在高帧率下被加强了）
- maxFPS≥90时，游玩剧本`相连、相辉、相映。属于我们的『Grand Live』`偶现「错误 返回标题」弹窗。
- 特殊比例的显示器下，游戏窗口可能会显示不全，请将`config.json`文件中的`uiScale`值由1.0改为0.8。
- 观看剧情时若启用了`AUTO`（自动播放）会导致剧情快速跳过
- `autoFullscreen`设为true时，部分用户会出现汉化失效的问题，此时请将汉化文件重新覆盖一遍即可。
- 可能会出现内存报错（`内存不能为read`）无法启动游戏的情况，请尝试下载安装微软常用运行库。
- `Assertion failed`报错：请将`config.json`文件也一同更新，或检查插件内的所有json文件内是否出现语法错误。
- 屏幕为16:10或其他特殊比例时自动全屏功能会失效，可以尝试此软件：https://booth.pm/ja/items/2813085
