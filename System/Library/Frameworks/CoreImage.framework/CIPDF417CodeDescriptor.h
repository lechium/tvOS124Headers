/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIBarcodeDescriptor.h>

@class NSData;

@interface CIPDF417CodeDescriptor : CIBarcodeDescriptor {

	NSData* errorCorrectedPayload;
	BOOL isCompact;
	long long rowCount;
	long long columnCount;

}

@property (readonly) NSData * errorCorrectedPayload; 
@property (readonly) BOOL isCompact; 
@property (readonly) long long rowCount; 
@property (readonly) long long columnCount; 
+(id)descriptorWithPayload:(id)arg1 isCompact:(BOOL)arg2 rowCount:(long long)arg3 columnCount:(long long)arg4 ;
+(BOOL)supportsSecureCoding;
-(NSData *)errorCorrectedPayload;
-(BOOL)isCompact;
-(id)initWithPayload:(id)arg1 isCompact:(BOOL)arg2 rowCount:(long long)arg3 columnCount:(long long)arg4 ;
-(long long)columnCount;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(long long)rowCount;
@end

