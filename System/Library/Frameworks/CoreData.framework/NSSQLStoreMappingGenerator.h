/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface NSSQLStoreMappingGenerator : NSObject {

	NSMutableDictionary* _names;

}
+(id)defaultMappingGenerator;
+(void)invalidate;
-(id)newGeneratedPropertyName:(id)arg1 ;
-(id)uniqueNameWithBase:(id)arg1 ;
-(id)generateTableName:(id)arg1 isAncillary:(BOOL)arg2 ;
-(id)newUniqueNameWithBase:(unsigned short*)arg1 withLength:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
@end
