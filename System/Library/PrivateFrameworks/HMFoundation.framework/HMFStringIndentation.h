/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@interface HMFStringIndentation : HMFObject {

	unsigned long long _width;
	unsigned long long _level;

}

@property (readonly) unsigned long long width;              //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long level;              //@synthesize level=_level - In the implementation block
+(id)indentationWithWidth:(unsigned long long)arg1 ;
+(id)indentation;
-(id)initWithWidth:(unsigned long long)arg1 ;
-(id)indentationByLevels:(long long)arg1 ;
-(id)init;
-(id)description;
-(unsigned long long)width;
-(unsigned long long)level;
@end

