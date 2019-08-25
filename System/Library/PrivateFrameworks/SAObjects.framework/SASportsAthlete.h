/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASportsEntity.h>

@class SASportsTeam, NSArray, NSString, NSNumber;

@interface SASportsAthlete : SASportsEntity

@property (nonatomic,retain) SASportsTeam * activeTeam; 
@property (nonatomic,copy) NSArray * athleteMetadata; 
@property (nonatomic,copy) NSArray * careerStatistics; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSArray * formattedMetadata; 
@property (nonatomic,copy) NSArray * formattedMetadataTypes; 
@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * height; 
@property (nonatomic,copy) NSNumber * injured; 
@property (nonatomic,copy) NSString * jerseyNumber; 
@property (nonatomic,copy) NSArray * lastGameStatistics; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSString * nickname; 
@property (nonatomic,copy) NSString * position; 
@property (nonatomic,copy) NSArray * previousTeams; 
@property (nonatomic,copy) NSArray * statistics; 
@property (nonatomic,copy) NSString * weight; 
+(id)athlete;
+(id)athleteWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)statistics;
-(id)encodedClassName;
-(NSString *)gender;
-(void)setGender:(NSString *)arg1 ;
-(SASportsTeam *)activeTeam;
-(void)setActiveTeam:(SASportsTeam *)arg1 ;
-(NSArray *)athleteMetadata;
-(void)setAthleteMetadata:(NSArray *)arg1 ;
-(NSArray *)careerStatistics;
-(void)setCareerStatistics:(NSArray *)arg1 ;
-(NSArray *)formattedMetadata;
-(void)setFormattedMetadata:(NSArray *)arg1 ;
-(NSArray *)formattedMetadataTypes;
-(void)setFormattedMetadataTypes:(NSArray *)arg1 ;
-(NSNumber *)injured;
-(void)setInjured:(NSNumber *)arg1 ;
-(NSString *)jerseyNumber;
-(void)setJerseyNumber:(NSString *)arg1 ;
-(NSArray *)lastGameStatistics;
-(void)setLastGameStatistics:(NSArray *)arg1 ;
-(NSArray *)previousTeams;
-(void)setPreviousTeams:(NSArray *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setNickname:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)nickname;
-(void)setStatistics:(NSArray *)arg1 ;
-(void)setHeight:(NSString *)arg1 ;
-(NSString *)height;
-(void)setPosition:(NSString *)arg1 ;
-(NSString *)position;
-(NSString *)weight;
-(void)setWeight:(NSString *)arg1 ;
@end

