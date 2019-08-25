/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BKSHIDEventDescriptor.h>

@interface BKSHIDEventKeyboardDescriptor : BKSHIDEventDescriptor {

	unsigned _page;
	unsigned _usage;

}

@property (readonly) unsigned page;               //@synthesize page=_page - In the implementation block
@property (readonly) unsigned usage;              //@synthesize usage=_usage - In the implementation block
+(id)descriptorWithPage:(unsigned)arg1 usage:(unsigned)arg2 ;
+(BOOL)supportsSecureCoding;
-(BOOL)describes:(id)arg1 ;
-(id)_initWithPage:(unsigned)arg1 usage:(unsigned)arg2 eventType:(unsigned)arg3 ;
-(unsigned)usage;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned)page;
@end

