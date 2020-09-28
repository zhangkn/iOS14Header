/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RBDomainAttributeManaging, RBBundlePropertiesManaging, RBEntitlementManaging;
@class RBAssertion, RBSAssertionIdentifier, RBConcreteTarget, RBProcess, RBSProcessIdentity, RBProcessState, RBInheritanceCollection;

@interface RBAttributeContext : NSObject {

	unsigned long long _activeDueToInheritedEndowmentCount;
	BOOL _targetIsSystem;
	RBAssertion* _assertion;
	RBSAssertionIdentifier* _assertionID;
	RBConcreteTarget* _target;
	RBProcess* _targetProcess;
	RBSProcessIdentity* _targetIdentity;
	RBProcessState* _initialProcessState;
	RBInheritanceCollection* _availableInheritances;
	id<RBDomainAttributeManaging> _domainAttributeManager;
	id<RBBundlePropertiesManaging> _bundlePropertiesManager;
	id<RBEntitlementManaging> _entitlementManager;

}

@property (nonatomic,retain) RBAssertion * assertion;                                             //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,readonly) RBSAssertionIdentifier * assertionID;                              //@synthesize assertionID=_assertionID - In the implementation block
@property (nonatomic,readonly) RBConcreteTarget * target;                                         //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) BOOL targetIsSystem;                                               //@synthesize targetIsSystem=_targetIsSystem - In the implementation block
@property (nonatomic,readonly) RBProcess * targetProcess;                                         //@synthesize targetProcess=_targetProcess - In the implementation block
@property (nonatomic,readonly) RBSProcessIdentity * targetIdentity;                               //@synthesize targetIdentity=_targetIdentity - In the implementation block
@property (nonatomic,retain) RBProcessState * initialProcessState;                                //@synthesize initialProcessState=_initialProcessState - In the implementation block
@property (nonatomic,retain) RBInheritanceCollection * availableInheritances;                     //@synthesize availableInheritances=_availableInheritances - In the implementation block
@property (nonatomic,retain) id<RBDomainAttributeManaging> domainAttributeManager;                //@synthesize domainAttributeManager=_domainAttributeManager - In the implementation block
@property (nonatomic,retain) id<RBBundlePropertiesManaging> bundlePropertiesManager;              //@synthesize bundlePropertiesManager=_bundlePropertiesManager - In the implementation block
@property (nonatomic,retain) id<RBEntitlementManaging> entitlementManager;                        //@synthesize entitlementManager=_entitlementManager - In the implementation block
@property (nonatomic,readonly) BOOL isActiveDueToInheritedEndowment; 
-(id<RBBundlePropertiesManaging>)bundlePropertiesManager;
-(RBSAssertionIdentifier *)assertionID;
-(id<RBDomainAttributeManaging>)domainAttributeManager;
-(RBAssertion *)assertion;
-(void)setBundlePropertiesManager:(id<RBBundlePropertiesManaging>)arg1 ;
-(void)setAssertion:(RBAssertion *)arg1 ;
-(void)popActiveDueToInheritedEndowment;
-(RBInheritanceCollection *)availableInheritances;
-(void)setAvailableInheritances:(RBInheritanceCollection *)arg1 ;
-(RBProcess *)targetProcess;
-(void)setInitialProcessState:(RBProcessState *)arg1 ;
-(RBProcessState *)initialProcessState;
-(BOOL)isActiveDueToInheritedEndowment;
-(RBConcreteTarget *)target;
-(RBSProcessIdentity *)targetIdentity;
-(void)setEntitlementManager:(id<RBEntitlementManaging>)arg1 ;
-(void)setDomainAttributeManager:(id<RBDomainAttributeManaging>)arg1 ;
-(id<RBEntitlementManaging>)entitlementManager;
-(BOOL)targetIsSystem;
-(void)pushActiveDueToInheritedEndowment;
@end
