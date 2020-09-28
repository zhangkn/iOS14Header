/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RBDomainAttributeManaging.h>
#import <libobjc.A.dylib/RBStateCapturing.h>

@protocol RBDomainAttributeDataProviding;
@class NSDictionary, NSString;

@interface RBDomainAttributeManager : NSObject <RBDomainAttributeManaging, RBStateCapturing> {

	NSDictionary* _domainAttributeTemplatesByDomain;
	id<RBDomainAttributeDataProviding> _dataProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
-(id)endowmentNamespaceForDomain:(id)arg1 andName:(id)arg2 ;
-(NSString *)stateCaptureTitle;
-(BOOL)containsAttributeWithDomain:(id)arg1 andName:(id)arg2 ;
-(id)captureState;
-(NSString *)debugDescription;
-(id)allEntitlements;
-(id)initWithDataProvider:(id)arg1 ;
-(BOOL)areTargetPropertiesValid:(id)arg1 forAttributeWithDomain:(id)arg2 andName:(id)arg3 ;
-(id)additionalRestrictionsForDomain:(id)arg1 andName:(id)arg2 ;
-(id)attributesForDomain:(id)arg1 andName:(id)arg2 targetProperties:(id)arg3 withError:(id*)arg4 ;
-(id)targetEntitlementsForDomain:(id)arg1 andName:(id)arg2 ;
-(id)originatorEntitlementsForDomain:(id)arg1 andName:(id)arg2 ;
@end
