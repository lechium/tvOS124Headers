/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFFeedback.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SFSearchResult;

@interface SFResultFeedback : SFFeedback <NSCopying> {

	SFSearchResult* _result;

}

@property (nonatomic,retain) SFSearchResult * result;              //@synthesize result=_result - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setResult:(SFSearchResult *)arg1 ;
-(id)initWithResult:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SFSearchResult *)result;
@end
