/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FMSystemVersionNumber : NSObject {

	long long _baseNumber;
	NSString* _baseLetter;
	long long _buildNumber;
	NSString* _suffix;

}

@property (assign,nonatomic) long long baseNumber;               //@synthesize baseNumber=_baseNumber - In the implementation block
@property (nonatomic,copy) NSString * baseLetter;                //@synthesize baseLetter=_baseLetter - In the implementation block
@property (assign,nonatomic) long long buildNumber;              //@synthesize buildNumber=_buildNumber - In the implementation block
@property (nonatomic,copy) NSString * suffix;                    //@synthesize suffix=_suffix - In the implementation block
-(long long)buildNumber;
-(void)setBuildNumber:(long long)arg1 ;
-(void)setSuffix:(NSString *)arg1 ;
-(NSString *)suffix;
-(NSString *)baseLetter;
-(long long)baseNumber;
-(void)setBaseNumber:(long long)arg1 ;
-(void)setBaseLetter:(NSString *)arg1 ;
-(id)init;
-(id)initWithString:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(long long)compare:(id)arg1 ;
@end

