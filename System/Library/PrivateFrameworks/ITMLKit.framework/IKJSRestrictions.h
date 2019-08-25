/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/IKJSRestrictions.h>

@protocol IKJSRestrictions <JSExport>
@property (nonatomic,readonly) long long maxMovieRank; 
@property (nonatomic,readonly) long long maxTVShowRank; 
@property (nonatomic,readonly) BOOL allowsExplicit; 
@property (nonatomic,readonly) BOOL allowsErotica; 
@required
-(id)maxMovieRatingForCountry:(id)arg1;
-(id)maxTVShowRatingForCountry:(id)arg1;
-(BOOL)allowsExplicit;
-(BOOL)allowsErotica;
-(long long)maxMovieRank;
-(long long)maxTVShowRank;

@end

#import <libobjc.A.dylib/_IKJSRestrictionsProxy.h>

@class NSString;

@interface IKJSRestrictions : IKJSObject <NSObject, IKJSRestrictions, _IKJSRestrictionsProxy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long maxMovieRank; 
@property (nonatomic,readonly) long long maxTVShowRank; 
@property (nonatomic,readonly) BOOL allowsExplicit; 
@property (nonatomic,readonly) BOOL allowsErotica; 
+(id)restrictionsDidChangeNotificationName;
-(id)maxMovieRatingForCountry:(id)arg1 ;
-(id)maxTVShowRatingForCountry:(id)arg1 ;
-(BOOL)allowsExplicit;
-(BOOL)allowsErotica;
-(long long)maxAppRank;
-(BOOL)allowArtistActivity;
-(id)maxAppRating;
-(BOOL)appInstallationAllowed;
-(BOOL)appAnalyticsAllowed;
-(BOOL)allowsITunes;
-(id)_ratingForSetting:(id)arg1 domain:(id)arg2 countryCode:(id)arg3 ;
-(id)_contentRestrictionsCountryCode;
-(id)asPrivateIKJSRestrictions;
-(BOOL)allowsShowingUndownloadedMovies;
-(BOOL)allowsShowingUndownloadedTVShows;
-(long long)maxMovieRank;
-(long long)maxTVShowRank;
@end

