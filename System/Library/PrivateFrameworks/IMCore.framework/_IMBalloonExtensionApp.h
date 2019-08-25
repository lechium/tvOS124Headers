/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMBalloonApp.h>

@class NSExtension, LSPlugInKitProxy;

@interface _IMBalloonExtensionApp : IMBalloonApp {

	NSExtension* _extension;
	LSPlugInKitProxy* _proxy;

}

@property (nonatomic,retain) NSExtension * extension;               //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) LSPlugInKitProxy * proxy;              //@synthesize proxy=_proxy - In the implementation block
-(BOOL)isLaunchProhibited;
-(id)itemID;
-(BOOL)isStickerPackOnly;
-(BOOL)isBetaPlugin;
-(id)initWithPluginBundle:(id)arg1 pluginKitProxy:(id)arg2 extension:(id)arg3 ;
-(id)extensionConnection;
-(id)proxyWithErrorHandle:(/*^block*/id)arg1 ;
-(id)initWithPluginBundle:(id)arg1 extension:(id)arg2 ;
-(id)initWithPluginBundle:(id)arg1 extension:(id)arg2 pluginKitProxyClass:(Class)arg3 proxy:(id)arg4 ;
-(void)setProxy:(LSPlugInKitProxy *)arg1 ;
-(void)setIsEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)version;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(LSPlugInKitProxy *)proxy;
-(id)plugin;
@end

