/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNRequestConfiguration.h>

@interface VNBurstAnalysisResultsRequestConfiguration : VNRequestConfiguration {

	BOOL _includeClusters;
	BOOL _includeAllImageIdentifiers;
	BOOL _includeAllImageStats;

}

@property (assign,nonatomic) BOOL includeClusters;                         //@synthesize includeClusters=_includeClusters - In the implementation block
@property (assign,nonatomic) BOOL includeAllImageIdentifiers;              //@synthesize includeAllImageIdentifiers=_includeAllImageIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL includeAllImageStats;                    //@synthesize includeAllImageStats=_includeAllImageStats - In the implementation block
-(id)initWithRequestClass:(Class)arg1 ;
-(void)setIncludeClusters:(BOOL)arg1 ;
-(void)setIncludeAllImageIdentifiers:(BOOL)arg1 ;
-(void)setIncludeAllImageStats:(BOOL)arg1 ;
-(BOOL)includeClusters;
-(BOOL)includeAllImageIdentifiers;
-(BOOL)includeAllImageStats;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

