/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol OS_xpc_object;
@class CMSensorRecorderInternal, NSObject, CLSensorRecorderSensorMeta, NSMutableArray, NSArray;

@interface CMSensorDataList : NSObject <NSFastEnumeration> {

	CMSensorRecorderInternal* fProxy;
	NSObject*<OS_xpc_object> fDataBuffer;
	CLSensorRecorderSensorMeta* fCurrentBlock;
	unsigned long long fCurrentBlockIdentifier;
	long long fCurrentBlockDataIdentifier;
	double fCurrentBlockStartTime;
	unsigned long long fCurrentBlockTimestamp;
	char* fDataBufferPtr;
	unsigned long long fDataBufferLength;
	unsigned long long fCurrentIdentifier;
	unsigned long long fStartingIdentifier;
	long long fRetrievedDataBufferIdentifier;
	unsigned long long fBlockOffset;
	AccelUnpacker fAccelUnpacker;
	GyroUnpacker fGyroUnpacker;
	NSMutableArray* fCachedData;
	NSArray* fMetaArray;
	int fDataType;

}
-(void)_updateCurrentBlockProperties;
-(BOOL)_updatePointers;
-(id)initWithIdentifier:(unsigned long long)arg1 andType:(int)arg2 ;
-(id)initFrom:(double)arg1 to:(double)arg2 withType:(int)arg3 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CM12*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
@end

