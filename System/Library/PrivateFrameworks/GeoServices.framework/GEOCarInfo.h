/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, GEOScreenDimension;

@interface GEOCarInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOScreenResolution _screenResolution;
	SCD_Struct_GE2* _engineTypes;
	SCD_Struct_GE2* _inputMethods;
	int _brightness;
	NSString* _carName;
	int _colorRange;
	int _deviceConnection;
	NSString* _manufacturer;
	NSString* _model;
	int _navAidedDrivingStatus;
	GEOScreenDimension* _screenDimension;
	BOOL _destinationSharingEnabled;
	SCD_Struct_GE40 _has;

}

@property (nonatomic,readonly) BOOL hasManufacturer; 
@property (nonatomic,retain) NSString * manufacturer;                             //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,readonly) BOOL hasModel; 
@property (nonatomic,retain) NSString * model;                                    //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) BOOL hasScreenResolution; 
@property (assign,nonatomic) GEOScreenResolution screenResolution;                //@synthesize screenResolution=_screenResolution - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceConnection; 
@property (assign,nonatomic) int deviceConnection;                                //@synthesize deviceConnection=_deviceConnection - In the implementation block
@property (assign,nonatomic) BOOL hasDestinationSharingEnabled; 
@property (assign,nonatomic) BOOL destinationSharingEnabled;                      //@synthesize destinationSharingEnabled=_destinationSharingEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasNavAidedDrivingStatus; 
@property (assign,nonatomic) int navAidedDrivingStatus;                           //@synthesize navAidedDrivingStatus=_navAidedDrivingStatus - In the implementation block
@property (nonatomic,readonly) unsigned long long engineTypesCount; 
@property (nonatomic,readonly) int* engineTypes; 
@property (nonatomic,readonly) BOOL hasCarName; 
@property (nonatomic,retain) NSString * carName;                                  //@synthesize carName=_carName - In the implementation block
@property (nonatomic,readonly) BOOL hasScreenDimension; 
@property (nonatomic,retain) GEOScreenDimension * screenDimension;                //@synthesize screenDimension=_screenDimension - In the implementation block
@property (assign,nonatomic) BOOL hasColorRange; 
@property (assign,nonatomic) int colorRange;                                      //@synthesize colorRange=_colorRange - In the implementation block
@property (assign,nonatomic) BOOL hasBrightness; 
@property (assign,nonatomic) int brightness;                                      //@synthesize brightness=_brightness - In the implementation block
@property (nonatomic,readonly) unsigned long long inputMethodsCount; 
@property (nonatomic,readonly) int* inputMethods; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)carInfoWithTraits:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setDeviceConnection:(int)arg1 ;
-(void)setManufacturer:(NSString *)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(unsigned long long)engineTypesCount;
-(void)clearEngineTypes;
-(int)engineTypeAtIndex:(unsigned long long)arg1 ;
-(void)addEngineType:(int)arg1 ;
-(void)setCarName:(NSString *)arg1 ;
-(void)setScreenDimension:(GEOScreenDimension *)arg1 ;
-(unsigned long long)inputMethodsCount;
-(void)clearInputMethods;
-(int)inputMethodAtIndex:(unsigned long long)arg1 ;
-(void)addInputMethod:(int)arg1 ;
-(BOOL)hasManufacturer;
-(BOOL)hasModel;
-(void)setScreenResolution:(GEOScreenResolution)arg1 ;
-(void)setHasScreenResolution:(BOOL)arg1 ;
-(BOOL)hasScreenResolution;
-(int)deviceConnection;
-(void)setHasDeviceConnection:(BOOL)arg1 ;
-(BOOL)hasDeviceConnection;
-(id)deviceConnectionAsString:(int)arg1 ;
-(int)StringAsDeviceConnection:(id)arg1 ;
-(void)setDestinationSharingEnabled:(BOOL)arg1 ;
-(void)setHasDestinationSharingEnabled:(BOOL)arg1 ;
-(BOOL)hasDestinationSharingEnabled;
-(int)navAidedDrivingStatus;
-(void)setNavAidedDrivingStatus:(int)arg1 ;
-(void)setHasNavAidedDrivingStatus:(BOOL)arg1 ;
-(BOOL)hasNavAidedDrivingStatus;
-(id)navAidedDrivingStatusAsString:(int)arg1 ;
-(int)StringAsNavAidedDrivingStatus:(id)arg1 ;
-(int*)engineTypes;
-(void)setEngineTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)engineTypesAsString:(int)arg1 ;
-(int)StringAsEngineTypes:(id)arg1 ;
-(BOOL)hasCarName;
-(BOOL)hasScreenDimension;
-(void)setColorRange:(int)arg1 ;
-(void)setHasColorRange:(BOOL)arg1 ;
-(BOOL)hasColorRange;
-(void)setHasBrightness:(BOOL)arg1 ;
-(BOOL)hasBrightness;
-(int*)inputMethods;
-(void)setInputMethods:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)inputMethodsAsString:(int)arg1 ;
-(int)StringAsInputMethods:(id)arg1 ;
-(NSString *)manufacturer;
-(GEOScreenResolution)screenResolution;
-(BOOL)destinationSharingEnabled;
-(NSString *)carName;
-(GEOScreenDimension *)screenDimension;
-(int)colorRange;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)model;
-(void)setBrightness:(int)arg1 ;
-(int)brightness;
-(void)copyTo:(id)arg1 ;
-(id)initWithTraits:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

