/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKPaymentSetupFieldPickerItem : NSObject <NSCopying> {

	NSString* _localizedDisplayName;
	NSString* _submissionValue;

}

@property (nonatomic,copy,readonly) NSString * localizedDisplayName;              //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * submissionValue;                   //@synthesize submissionValue=_submissionValue - In the implementation block
+(id)_itemWithDictionary:(id)arg1 ;
-(id)initWithName:(id)arg1 value:(id)arg2 ;
-(NSString *)localizedDisplayName;
-(NSString *)submissionValue;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

