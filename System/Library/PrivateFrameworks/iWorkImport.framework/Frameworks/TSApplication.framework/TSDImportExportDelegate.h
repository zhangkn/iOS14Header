/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:20 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSApplication.framework/TSApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSMapTable;


@protocol TSDImportExportDelegate <NSObject>
@property (nonatomic,readonly) NSMapTable * incompatibleMediaContainersWithDataUnsupportedOnThisDevice; 
@property (nonatomic,readonly) NSMapTable * incompatibleMediaContainersWithDataUnsupportedOnAllDevices; 
@property (nonatomic,readonly) BOOL isBrowsingVersions; 
@optional
-(BOOL)isBrowsingVersions;
-(void)addIncompatibleMediaContainer:(id)arg1 incompatibleData:(id)arg2 compatibilityLevel:(long long)arg3;
-(void)replaceIncompatibleMediaContainer:(id)arg1 withNewMediaContainer:(id)arg2;
-(void)removeIncompatibleMediaContainer:(id)arg1;
-(NSMapTable *)incompatibleMediaContainersWithDataUnsupportedOnThisDevice;
-(NSMapTable *)incompatibleMediaContainersWithDataUnsupportedOnAllDevices;

@required
-(id)warnings;
-(void)addWarning:(id)arg1;
-(void)removeWarning:(id)arg1;

@end

