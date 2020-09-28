/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HearingUtilities/AXHASettings.h>

@class NPSDomainAccessor;

@interface HANanoSettings : AXHASettings {

	NPSDomainAccessor* _domainAccessor;
	NPSDomainAccessor* _globalDomainAccessor;

}

@property (nonatomic,retain) NPSDomainAccessor * domainAccessor;                    //@synthesize domainAccessor=_domainAccessor - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * globalDomainAccessor;              //@synthesize globalDomainAccessor=_globalDomainAccessor - In the implementation block
+(id)sharedInstance;
-(void)setGlobalDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(id)currentLocale;
-(NPSDomainAccessor *)globalDomainAccessor;
-(id)_valueForPreferenceKey:(id)arg1 ;
-(NPSDomainAccessor *)domainAccessor;
-(id)nanoDomainAccessor;
-(void)setDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(void)_setValue:(id)arg1 forPreferenceKey:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(BOOL)shouldUseiCloud;
-(void)pairedWatchDidChange:(id)arg1 ;
@end
