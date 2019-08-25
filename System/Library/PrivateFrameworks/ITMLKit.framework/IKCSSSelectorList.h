/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IKMutableArray;

@interface IKCSSSelectorList : NSObject <NSCopying> {

	IKMutableArray* _selectors;

}

@property (nonatomic,readonly) IKMutableArray * selectors;              //@synthesize selectors=_selectors - In the implementation block
-(id)selectorAtIndex:(unsigned long long)arg1 ;
-(IKMutableArray *)selectors;
-(void)addSelector:(id)arg1 ;
-(id)firstSelector;
-(id)lastSelector;
-(id)init;
-(unsigned long long)count;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
