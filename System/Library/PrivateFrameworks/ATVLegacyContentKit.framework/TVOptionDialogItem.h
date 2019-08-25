/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TVOptionDialogItem : NSObject {

	/*^block*/id _block;
	NSString* _title;
	NSString* _subtitle;

}

@property (nonatomic,readonly) id block;                              //@synthesize block=_block - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
+(id)itemWithTitle:(id)arg1 andBlock:(/*^block*/id)arg2 ;
+(id)itemWithTitle:(id)arg1 subtitle:(id)arg2 andBlock:(/*^block*/id)arg3 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 andBlock:(/*^block*/id)arg3 ;
-(NSString *)title;
-(NSString *)subtitle;
-(id)block;
@end

