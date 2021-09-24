# iOS SDK集成指南
## 一、SDK说明
### 适用版本
本文档适用于短链SDK v1.0.0及以后版本。
## 二、创建应用
在创蓝官网创建[创建应用](https://api.253.com)，创建成功后自动生成appid标记该应用。
## 三、创建短链
登录官网进入开发者平台，选择【追踪短链】-【短链管理】-【创建短链】。
![1628763478(1).png](https://cdn.nlark.com/yuque/0/2021/png/21957230/1628763485031-b9c28407-1f99-4170-b103-0c92086ef107.png#clientId=u3ea57850-4de7-4&from=paste&height=398&id=udc1d061c&margin=%5Bobject%20Object%5D&name=1628763478%281%29.png&originHeight=398&originWidth=1908&originalType=binary&ratio=1&size=49199&status=done&style=none&taskId=u7273ef31-e561-4aae-a1ec-a585b4968da&width=1908)
### 3.1App创建应用
![1628763666(1).png](https://cdn.nlark.com/yuque/0/2021/png/21957230/1628763673937-06020a17-048e-450a-a8d3-a6858416b7d5.png#clientId=u3ea57850-4de7-4&from=paste&height=917&id=u9460b859&margin=%5Bobject%20Object%5D&name=1628763666%281%29.png&originHeight=917&originWidth=1531&originalType=binary&ratio=1&size=50598&status=done&style=none&taskId=u5777ac29-93da-40bd-a17e-3a6072dd9bd&width=1531)
依照指示填写相关内容即可，短链投放渠道可以选择创蓝、自有平台。
### 3.2小程序创建应用
![1628763827(1).png](https://cdn.nlark.com/yuque/0/2021/png/21957230/1628763831357-35f28f75-3439-457a-83e0-3a9ffad6e284.png#clientId=u3ea57850-4de7-4&from=paste&height=645&id=u85b959cd&margin=%5Bobject%20Object%5D&name=1628763827%281%29.png&originHeight=645&originWidth=1664&originalType=binary&ratio=1&size=31408&status=done&style=none&taskId=ud2dbf389-7796-4e2b-b5f4-de590ccf42a&width=1664)
依照指示填写相关内容即可，短链投放渠道可以选择创蓝、自有平台。

- 小程序跳转地址获取方法如下：

（1）登录小程序后台；
（2）选择右上角【工具】；
![1628763951(1).png](https://cdn.nlark.com/yuque/0/2021/png/21957230/1628763959556-c630dc77-2fc7-4ab5-ba60-2cf4f534870c.png#clientId=u3ea57850-4de7-4&from=paste&height=127&id=uae5667c0&margin=%5Bobject%20Object%5D&name=1628763951%281%29.png&originHeight=127&originWidth=1751&originalType=binary&ratio=1&size=14782&status=done&style=none&taskId=u887fdfa0-42e3-4b00-932f-9e68bd97a2c&width=1751)
（3）根据页面提示填写相关内容后即可获取。
### 3.3集成模板页
在创建短链时，可以选择使用自己的下载页，在此之前需要为下载页完成 Web集成。
![1628764235(1).png](https://cdn.nlark.com/yuque/0/2021/png/21957230/1628764239512-106ff9d1-9bc5-497b-8a18-3751d4c5aa4f.png#clientId=u3ea57850-4de7-4&from=paste&height=670&id=ud3dd65f6&margin=%5Bobject%20Object%5D&name=1628764235%281%29.png&originHeight=670&originWidth=1784&originalType=binary&ratio=1&size=50062&status=done&style=none&taskId=u66efe94f-e100-4971-93b5-9296da31c29&width=1784)
将以上段代码嵌入到短链落地页（即用户点击短链跳转的目标页面）body标签之前即可。
也可以使用使用千帆互动提供的模板页，需要在模板页进行编辑。
![1628764338(1).png](https://cdn.nlark.com/yuque/0/2021/png/21957230/1628764343336-b5cb31ba-5055-45f5-9fd9-5bf1807c2d16.png#clientId=u3ea57850-4de7-4&from=paste&height=837&id=u404606a9&margin=%5Bobject%20Object%5D&name=1628764338%281%29.png&originHeight=837&originWidth=1861&originalType=binary&ratio=1&size=106222&status=done&style=none&taskId=u83e1eb47-ba34-4a08-a19b-643ae30b26c&width=1861)
## 四、配置工程
### 4.1导入SDK
#### 4.1.1 手动导入

- 在创蓝官网[下载最新SDK](https://api.253.com)
- 解压后，将framework文件夹拖入项目中（请勾选 "Copy items if needed" )。
### 4.2 项目配置
#### 4.2.1 配置APPID
在苹果官网注册 appid 时需要勾选` Associated Domains ` ，如图：
![D2809C7E-385D-41AE-9330-5A6CBC8F405D.png](https://cdn.nlark.com/yuque/0/2021/png/536400/1620888888582-a260af1c-346a-464b-b1c8-18a11dc20e07.png#clientId=u21aa47c8-36ee-4&from=drop&id=u800832d1&margin=%5Bobject%20Object%5D&name=D2809C7E-385D-41AE-9330-5A6CBC8F405D.png&originHeight=636&originWidth=1159&originalType=binary&ratio=1&size=129088&status=done&style=none&taskId=u41bc899e-3e28-4cbe-8369-9a1d6c70d6b)
#### 4.2.1 配置 URL Scheme
在 `Xcode`>`Target`>`Info`->`URL Types`中填写[控制台](https://api.253.com)设置的 Scheme，xcode 中必须和控制台填写的一致。如下图
![20210123160432.jpg](https://cdn.nlark.com/yuque/0/2021/jpeg/536400/1611389098238-fe73f4ab-15ff-46b4-85f4-5af095ac52ac.jpeg#height=450&id=U8KWg&margin=%5Bobject%20Object%5D&name=20210123160432.jpg&originHeight=450&originWidth=1070&originalType=binary&ratio=1&size=63180&status=done&style=none&width=1070)
#### 4.2.2 配置通用链接 （universal link）
在`Xcode`>`Target`>`Signing&Capablities`中添加Associated Domains ，如下图：
![Foxmail20210123161635.png](https://cdn.nlark.com/yuque/0/2021/png/536400/1611389815579-bc6408b8-cab1-4870-b655-55270aa4864c.png#height=591&id=gx473&margin=%5Bobject%20Object%5D&name=Foxmail20210123161635.png&originHeight=591&originWidth=1039&originalType=binary&ratio=1&size=252951&status=done&style=none&width=1039)
然后将控制台生成的域名填入项目中如下：此处以 1rQM1d.new253.com 为例
![03F6CEA3-0D28-4CB8-BE49-E5948D93EBF2.png](https://cdn.nlark.com/yuque/0/2021/png/536400/1620889150779-096c214c-b61c-47f3-ad2a-b8d23f3a8250.png#clientId=u21aa47c8-36ee-4&from=drop&id=ud3187a53&margin=%5Bobject%20Object%5D&name=03F6CEA3-0D28-4CB8-BE49-E5948D93EBF2.png&originHeight=523&originWidth=1066&originalType=binary&ratio=1&size=100975&status=done&style=none&taskId=ucf594703-0ee8-4641-ab81-d964be72813)
**注意**

- 必须把指的的所有的universal link域名都填入配置中，记得加前缀：applinks:
## 五、SDK 调用
导入SDK头文件 
`#import <CLLink/CLLink.h>`
### 5.1 初始化SDK
在APP的启动方法中 `application:didFinishLaunchingWithOptions:` 调用依赖的基础模块中的`registerAppId:`进行初始化。代码如下
```
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.

    //初始化
    [CLCoreManager registerAppId:@"appid"];
   
    return YES;
}
   
```
### 5.2 配置一键拉起功能
在app已安装的情况下，从各平台、浏览器拉起时传递参数。
```
-(BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation{
    
    [CLLinkManager wakeUpLink:url];
    //其他第三方回调；
    return YES;
}
//iOS9以上
- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(nonnull NSDictionary *)options{
    
    [CLLinkManager wakeUpLink:url];
    //其他第三方回调；
     return YES;
}

- (BOOL)application:(UIApplication *)application continueUserActivity:(NSUserActivity *)userActivity restorationHandler:(void (^)(NSArray * _Nullable))restorationHandler{
    
    [CLLinkManager continueUserActivity:userActivity];
    //其他第三方回调；
     return YES;
}
```
### 5.3 场景还原
在 app 被唤醒时，从各平台、各种浏览器点击短链唤醒APP，当在有效时间内点击打开 app 时获取设置的参数。
```
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    
    //初始化
    ...
    
    //注册唤醒回调
    [CLLinkManager registerWakeUpCallBack:^(CLLinkResponse * _Nonnull linkResponse) {
        
        //跳转处理
        
    }];

    return YES;
}
```
### 5.4 获取无码邀请参数
场景中免除填写邀请码，规避用户操作繁琐而带来的影响，提高转化率。如：APP 需要安装参数/游戏间邀请好友/地推活动/建立上下级关系，快速安装打开应用完成业务的奖励.
```
//无码邀请参数
[CLLinkManager getInvitationParams:nil result:^(NSDictionary * _Nonnull parmas) {
        
        //根据返回参数完成邀请、绑定等逻辑
 }];
```


