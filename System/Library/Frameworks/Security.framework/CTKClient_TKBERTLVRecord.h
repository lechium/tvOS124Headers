/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Security.framework/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Security/CTKClient_TKTLVRecord.h>

@interface CTKClient_TKBERTLVRecord : CTKClient_TKTLVRecord
+(id)parseFromDataSource:(id)arg1 ;
+(unsigned long long)encodeNumber:(unsigned long long)arg1 into:(char*)arg2 ;
+(id)dataForTag:(unsigned long long)arg1 ;
+(id)zuluDateFormatter;
-(id)propertyList;
-(id)initWithPropertyList:(id)arg1 ;
-(id)initWithTag:(unsigned long long)arg1 value:(id)arg2 ;
-(id)initWithTag:(unsigned long long)arg1 records:(id)arg2 ;
@end

