/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, FBSProcessHandle, BSMachPortTaskNameRight;


@protocol FBSProcessIdentity <FBSProcess>
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * jobLabel; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,retain,readonly) FBSProcessHandle * handle; 
@property (nonatomic,retain,readonly) BSMachPortTaskNameRight * taskNameRight; 
@required
-(FBSProcessHandle *)handle;
-(NSString *)jobLabel;
-(BSMachPortTaskNameRight *)taskNameRight;
-(NSString *)name;
-(long long)type;

@end

