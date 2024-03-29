/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/TVHomeSharingServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>

@interface TVHSBlockValueTransformer : NSValueTransformer {

	/*^block*/id _valueTransformBlock;

}

@property (nonatomic,copy) id valueTransformBlock;              //@synthesize valueTransformBlock=_valueTransformBlock - In the implementation block
+(BOOL)allowsReverseTransformation;
-(id)transformedValue:(id)arg1 ;
-(id)initWithValueTransformBlock:(/*^block*/id)arg1 ;
-(id)valueTransformBlock;
-(void)setValueTransformBlock:(id)arg1 ;
-(id)init;
@end

