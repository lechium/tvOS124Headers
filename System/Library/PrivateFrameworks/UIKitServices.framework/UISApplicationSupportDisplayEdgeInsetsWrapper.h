/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitServices/UIKitServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface UISApplicationSupportDisplayEdgeInsetsWrapper : NSObject <BSXPCCoding, NSCopying> {

	double _topInset;
	double _leftInset;
	double _bottomInset;
	double _rightInset;

}

@property (assign,nonatomic) double topInset;                       //@synthesize topInset=_topInset - In the implementation block
@property (assign,nonatomic) double leftInset;                      //@synthesize leftInset=_leftInset - In the implementation block
@property (assign,nonatomic) double bottomInset;                    //@synthesize bottomInset=_bottomInset - In the implementation block
@property (assign,nonatomic) double rightInset;                     //@synthesize rightInset=_rightInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTopInset:(double)arg1 ;
-(double)topInset;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(double)leftInset;
-(double)bottomInset;
-(double)rightInset;
-(id)initWithTop:(double)arg1 left:(double)arg2 bottom:(double)arg3 right:(double)arg4 ;
-(void)setLeftInset:(double)arg1 ;
-(void)setBottomInset:(double)arg1 ;
-(void)setRightInset:(double)arg1 ;
@end

