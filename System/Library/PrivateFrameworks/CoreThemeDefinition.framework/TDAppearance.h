/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface TDAppearance : NSManagedObject {

	NSString* _name;
	unsigned short _identifier;

}

@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) unsigned short identifier; 
-(unsigned short)identifier;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(unsigned short)arg1 ;
@end
