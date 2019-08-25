/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class NSAttributedString;

@interface _MKMultiPartStringComponent : NSObject {

	NSAttributedString* _attributedString;
	NSRange _originalRange;
	NSRange _range;

}

@property (nonatomic,copy,readonly) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,readonly) NSRange originalRange;                                   //@synthesize originalRange=_originalRange - In the implementation block
@property (assign,nonatomic) NSRange range;                                             //@synthesize range=_range - In the implementation block
-(id)initWithAttributedString:(id)arg1 range:(NSRange)arg2 ;
-(NSRange)originalRange;
-(id)description;
-(NSAttributedString *)attributedString;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
@end

