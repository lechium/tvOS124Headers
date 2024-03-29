/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPMediaLibrary, MPModelObject;

@interface MPModelLibraryIncrementSkipCountChangeRequest : NSObject {

	MPMediaLibrary* _mediaLibrary;
	MPModelObject* _model;

}

@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;              //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,readonly) MPModelObject * model;                    //@synthesize model=_model - In the implementation block
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(id)initWithModel:(id)arg1 ;
-(MPModelObject *)model;
@end

