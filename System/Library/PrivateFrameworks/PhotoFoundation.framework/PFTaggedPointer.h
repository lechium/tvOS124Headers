/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PFTaggedPointer : NSObject {

	SCD_Union_PF9 _payload;

}
+(id)newInstanceWithPayload:(unsigned long long)arg1 ;
+(BOOL)taggedPointersEnabled;
+(id)newInstanceWithSignedPayload:(long long)arg1 ;
+(unsigned short)tag;
-(long long)signedPayload;
-(id)initWithSignedPayload:(long long)arg1 ;
-(BOOL)isTaggedPointer;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)payload;
-(id)initWithPayload:(unsigned long long)arg1 ;
@end

