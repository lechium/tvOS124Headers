/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@interface _MPMediaLibraryEntityPropertyTranslator : NSObject {

	/*^block*/id _sortTransformer;
	/*^block*/id _valueTransformer;
	shared_ptr<std::__1::map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > >* _propertiesToFetchMap;
	shared_ptr<std::__1::map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > >* _propertiesToSortMap;

}

@property (assign,nonatomic) shared_ptr<std::__1::map<std::__1::basic_string<char> propertiesToFetchMap;              //@synthesize propertiesToFetchMap=_propertiesToFetchMap - In the implementation block
@property (assign,nonatomic) shared_ptr<std::__1::map<std::__1::basic_string<char> propertiesToSortMap;               //@synthesize propertiesToSortMap=_propertiesToSortMap - In the implementation block
@property (nonatomic,copy) id sortTransformer;                                                                        //@synthesize sortTransformer=_sortTransformer - In the implementation block
@property (nonatomic,copy) id valueTransformer;                                                                       //@synthesize valueTransformer=_valueTransformer - In the implementation block
-(shared_ptr<std::__1::map<std::__1::basic_string<char>)propertiesToFetchMap;
-(void)setPropertiesToFetchMap:(shared_ptr<std::__1::map<std::__1::basic_string<char>)arg1 ;
-(shared_ptr<std::__1::map<std::__1::basic_string<char>)propertiesToSortMap;
-(void)setPropertiesToSortMap:(shared_ptr<std::__1::map<std::__1::basic_string<char>)arg1 ;
-(id)sortTransformer;
-(void)setSortTransformer:(id)arg1 ;
-(id)valueTransformer;
-(void)setValueTransformer:(id)arg1 ;
@end

