/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BaseBoard/BaseBoard-Structs.h>
@interface BSCFBundle : NSObject {

	CFBundleRef _cfBundle;

}
-(id)_initWithCFBundle:(CFBundleRef)arg1 ;
-(id)_pathsForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
-(CFBundleRef)cfBundle;
-(void)dealloc;
-(id)bundleIdentifier;
-(id)description;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(id)infoDictionary;
-(id)pathForResource:(id)arg1 ofType:(id)arg2 ;
-(id)initWithURL:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(id)bundlePath;
-(id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
-(id)localizedInfoDictionary;
-(id)executablePath;
@end
