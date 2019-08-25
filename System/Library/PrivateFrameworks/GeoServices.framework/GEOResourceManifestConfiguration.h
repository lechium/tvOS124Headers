/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface GEOResourceManifestConfiguration : NSObject {

	unsigned _tileGroupIdentifier;
	NSString* _os;
	NSString* _osVersion;
	NSString* _osBuild;
	NSString* _countryCode;
	NSString* _hardwareIdentifier;
	NSString* _applicationIdentifier;
	NSString* _applicationVersion;
	NSString* _environment;
	NSString* _dataDirectory;
	NSString* _disputedBorderCountryOverride;
	NSString* _disputedBorderRegionOverride;
	int _defaultScale;
	BOOL _requiresLegacyFormat;

}

@property (assign,nonatomic) unsigned tileGroupIdentifier;                        //@synthesize tileGroupIdentifier=_tileGroupIdentifier - In the implementation block
@property (nonatomic,copy) NSString * os;                                         //@synthesize os=_os - In the implementation block
@property (nonatomic,copy) NSString * osVersion;                                  //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,copy) NSString * osBuild;                                    //@synthesize osBuild=_osBuild - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                                //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSString * hardwareIdentifier;                         //@synthesize hardwareIdentifier=_hardwareIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationIdentifier;                      //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationVersion;                         //@synthesize applicationVersion=_applicationVersion - In the implementation block
@property (nonatomic,copy) NSString * environment;                                //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy) NSString * dataDirectory;                              //@synthesize dataDirectory=_dataDirectory - In the implementation block
@property (nonatomic,copy) NSString * disputedBorderCountryOverride;              //@synthesize disputedBorderCountryOverride=_disputedBorderCountryOverride - In the implementation block
@property (nonatomic,copy) NSString * disputedBorderRegionOverride;               //@synthesize disputedBorderRegionOverride=_disputedBorderRegionOverride - In the implementation block
@property (nonatomic,readonly) int defaultScale;                                  //@synthesize defaultScale=_defaultScale - In the implementation block
@property (nonatomic,readonly) BOOL requiresLegacyFormat;                         //@synthesize requiresLegacyFormat=_requiresLegacyFormat - In the implementation block
@property (nonatomic,readonly) NSString * directorySuffix; 
+(id)defaultConfiguration;
-(void)setTileGroupIdentifier:(unsigned)arg1 ;
-(BOOL)isDefaultConfiguration;
-(NSString *)dataDirectory;
-(NSString *)countryCode;
-(NSString *)osVersion;
-(void)setCountryCode:(NSString *)arg1 ;
-(id)conciseDictionaryRepresentation;
-(void)setHardwareIdentifier:(NSString *)arg1 ;
-(void)setOsVersion:(NSString *)arg1 ;
-(void)setOsBuild:(NSString *)arg1 ;
-(NSString *)osBuild;
-(NSString *)disputedBorderCountryOverride;
-(NSString *)disputedBorderRegionOverride;
-(NSString *)os;
-(NSString *)applicationVersion;
-(NSString *)directorySuffix;
-(id)initWithConciseDictionaryRepresentation:(id)arg1 ;
-(id)manifestDictionaryRepresentation;
-(unsigned)tileGroupIdentifier;
-(void)setOs:(NSString *)arg1 ;
-(void)setEnvironment:(NSString *)arg1 ;
-(void)setDataDirectory:(NSString *)arg1 ;
-(void)setDisputedBorderCountryOverride:(NSString *)arg1 ;
-(void)setDisputedBorderRegionOverride:(NSString *)arg1 ;
-(int)defaultScale;
-(BOOL)requiresLegacyFormat;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)environment;
-(NSString *)hardwareIdentifier;
-(void)setApplicationVersion:(NSString *)arg1 ;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)applicationIdentifier;
@end

