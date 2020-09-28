/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFAccountAccessResource;

@interface WFWunderlistListPickerParameter : WFEnumerationParameter {

	BOOL _hasLoadedLists;
	NSArray* _possibleStates;
	WFAccountAccessResource* _accessResource;

}

@property (assign,nonatomic) BOOL hasLoadedLists;                                          //@synthesize hasLoadedLists=_hasLoadedLists - In the implementation block
@property (assign,nonatomic,__weak) WFAccountAccessResource * accessResource;              //@synthesize accessResource=_accessResource - In the implementation block
-(void)dealloc;
-(void)setLists:(id)arg1 ;
-(id)lists;
-(id)possibleStates;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(void)wasAddedToWorkflow;
-(id)defaultSerializedRepresentation;
-(WFAccountAccessResource *)accessResource;
-(void)fetchListsIfNeeded;
-(void)loadListsFromCache;
-(id)listNamed:(id)arg1 ;
-(void)setAccessResource:(WFAccountAccessResource *)arg1 ;
-(BOOL)hasLoadedLists;
-(void)setHasLoadedLists:(BOOL)arg1 ;
@end
