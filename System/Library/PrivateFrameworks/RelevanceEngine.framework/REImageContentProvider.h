/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class REImage;

@interface REImageContentProvider : NSObject <NSCopying, NSCoding> {

	REImage* _onePieceImage;
	REImage* _twoPieceForegroundImage;
	REImage* _twoPieceBackgroundImage;

}

@property (nonatomic,readonly) REImage * onePieceImage;                        //@synthesize onePieceImage=_onePieceImage - In the implementation block
@property (nonatomic,readonly) REImage * twoPieceForegroundImage;              //@synthesize twoPieceForegroundImage=_twoPieceForegroundImage - In the implementation block
@property (nonatomic,readonly) REImage * twoPieceBackgroundImage;              //@synthesize twoPieceBackgroundImage=_twoPieceBackgroundImage - In the implementation block
+(id)imageContentProviderWithOnePieceImage:(id)arg1 ;
+(id)imageContentProviderWithOnePieceImage:(id)arg1 twoPieceForegroundImage:(id)arg2 twoPieceBackgroundImage:(id)arg3 ;
-(id)initWithImage:(id)arg1 foregroundImage:(id)arg2 backgroundImage:(id)arg3 ;
-(REImage *)onePieceImage;
-(REImage *)twoPieceForegroundImage;
-(REImage *)twoPieceBackgroundImage;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

