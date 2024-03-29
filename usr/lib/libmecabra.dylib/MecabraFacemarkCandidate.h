/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libmecabra.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MecabraFacemarkCandidate : NSObject {

	NSString* _string;
	NSString* _category;

}

@property (nonatomic,readonly) NSString * string;                //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSString * category;              //@synthesize category=_category - In the implementation block
+(id)copyFacemarkCandidatesForLanguage:(int)arg1 ;
+(id)candidateWithString:(id)arg1 category:(id)arg2 ;
+(id)copyFacemarkCandidatesForLocale:(id)arg1 ;
-(id)surface;
-(id)initWithString:(id)arg1 category:(id)arg2 ;
-(void)dealloc;
-(NSString *)string;
-(id)description;
-(NSString *)category;
@end

