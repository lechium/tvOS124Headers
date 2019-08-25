/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TIKeyboardLayout : NSObject <NSSecureCoding> {

	BOOL _usesTwoHands;
	unsigned long long _count;
	ShortRect* _frames;
	unsigned long long _framesCapacity;
	char* _strings;
	unsigned long long _stringsSize;
	unsigned long long _stringsCapacity;

}

@property (assign,nonatomic) BOOL usesTwoHands;              //@synthesize usesTwoHands=_usesTwoHands - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)ensureFrameCapacity:(unsigned long long)arg1 ;
-(void)ensureStringCapacity:(unsigned long long)arg1 ;
-(long long)keyContainingPoint:(CGPoint)arg1 ;
-(BOOL)usesTwoHands;
-(void)enumerateKeysUsingBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)setUsesTwoHands:(BOOL)arg1 ;
-(void)addKeyWithString:(id)arg1 frame:(CGRect)arg2 ;
@end

