/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNVCardSerializationStorage <NSObject>
@required
-(id)insertionMarker;
-(unsigned long long)estimatedDataLength;
-(void)insertString:(id)arg1 atMarker:(id)arg2;
-(unsigned long long)currentLength;
-(void)appendString:(id)arg1 usingEncoding:(unsigned long long)arg2;
-(void)appendString:(id)arg1;
-(void)appendFormat:(id)arg1;
-(void)appendData:(id)arg1;

@end

