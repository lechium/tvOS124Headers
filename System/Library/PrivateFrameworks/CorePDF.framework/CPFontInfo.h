/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@interface CPFontInfo : NSObject <CPDisposable> {

	CFDataRef fontData;
	const char* dataPtr;
	unsigned offset;
	unsigned fontDataLength;
	BOOL valid;

}
-(void)finalize;
-(float)readFloat;
-(int)kernUnitsPerEm;
-(unsigned char)readByte;
-(unsigned)readUnsignedLong;
-(CGRect)readRect;
-(int)readLong;
-(id)initWithFontData:(CFDataRef)arg1 ;
-(BOOL)getDescriptor:(SCD_Struct_CP29*)arg1 ;
-(CFDataRef)newKernData;
-(void)dispose;
-(void)dealloc;
@end

