/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLPTPAssetReader.h>

@class PHMediaFormatConversionDestination;

@interface PLPTPConversionDestinationAssetReader : PLPTPAssetReader {

	PHMediaFormatConversionDestination* _destination;

}

@property (retain) PHMediaFormatConversionDestination * destination;              //@synthesize destination=_destination - In the implementation block
-(id)dataSourcePathForDataRange:(NSRange)arg1 error:(id*)arg2 ;
-(id)initWithDestination:(id)arg1 ;
-(void)setDestination:(PHMediaFormatConversionDestination *)arg1 ;
-(PHMediaFormatConversionDestination *)destination;
-(id)path;
@end
