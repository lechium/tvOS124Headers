/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HFUniqueArrayDiffOptions : NSObject {

	BOOL _allowMoves;
	/*^block*/id _equalComparator;
	/*^block*/id _hashGenerator;
	/*^block*/id _changeComparator;

}

@property (nonatomic,copy) id equalComparator;               //@synthesize equalComparator=_equalComparator - In the implementation block
@property (nonatomic,copy) id hashGenerator;                 //@synthesize hashGenerator=_hashGenerator - In the implementation block
@property (nonatomic,copy) id changeComparator;              //@synthesize changeComparator=_changeComparator - In the implementation block
@property (assign,nonatomic) BOOL allowMoves;                //@synthesize allowMoves=_allowMoves - In the implementation block
-(void)setEqualComparator:(id)arg1 ;
-(void)setHashGenerator:(id)arg1 ;
-(void)setAllowMoves:(BOOL)arg1 ;
-(void)setChangeComparator:(id)arg1 ;
-(id)equalComparator;
-(id)hashGenerator;
-(id)changeComparator;
-(BOOL)allowMoves;
-(id)init;
@end

