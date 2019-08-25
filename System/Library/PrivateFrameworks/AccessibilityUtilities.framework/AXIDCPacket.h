/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:32 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSMutableData;

@interface AXIDCPacket : NSObject {

	unsigned long long _totalLength;
	NSMutableData* _data;

}

@property (nonatomic,retain) NSMutableData * data;              //@synthesize data=_data - In the implementation block
+(id)packetDataWithPayload:(id)arg1 ;
+(SCD_Struct_AX9)headerFromData:(id)arg1 ;
+(id)packetWithHeader:(SCD_Struct_AX9)arg1 ;
-(id)initWithHeader:(SCD_Struct_AX9)arg1 ;
-(unsigned long long)missingLength;
-(id)dataPayload;
-(id)objectPayload;
-(NSMutableData *)data;
-(void)setData:(NSMutableData *)arg1 ;
-(id)appendData:(id)arg1 ;
@end

