/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UITextSizeCache : NSObject {

	ui_size_cache* _cache;

}
-(id)description;
-(BOOL)getSize:(CGSize*)arg1 baselineInfo:(SCD_Struct_UI103*)arg2 forTargetSize:(CGSize)arg3 isMultiline:(BOOL)arg4 ;
-(void)addSize:(CGSize)arg1 baselineInfo:(SCD_Struct_UI103*)arg2 forTargetSize:(CGSize)arg3 ;
-(void)removeAllSizes;
@end

