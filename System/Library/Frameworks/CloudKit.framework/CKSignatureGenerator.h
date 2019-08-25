/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CKSignatureGenerator : NSObject {

	BOOL _valid;
	void* _generator;

}

@property (assign,nonatomic) void* generator;                        //@synthesize generator=_generator - In the implementation block
@property (assign,getter=isValid,nonatomic) BOOL valid;              //@synthesize valid=_valid - In the implementation block
+(BOOL)isValidSignature:(id)arg1 ;
+(id)signatureWithFileDescriptor:(int)arg1 error:(id*)arg2 ;
+(BOOL)isValidV2Signature:(id)arg1 ;
-(char*)_newSignatureByFinishingGenerator;
-(void)updateWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void*)generator;
-(id)dataByFinishingSignature;
-(void)setValid:(BOOL)arg1 ;
-(void)setGenerator:(void*)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isValid;
-(void)updateWithData:(id)arg1 ;
@end
