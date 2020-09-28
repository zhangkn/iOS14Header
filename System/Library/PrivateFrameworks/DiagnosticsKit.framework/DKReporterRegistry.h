/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DKExtensionRegistry.h>

@class NSMutableDictionary, NSSet, NSString;

@interface DKReporterRegistry : NSObject <DKExtensionRegistry> {

	NSMutableDictionary* _generatorLookup;
	NSMutableDictionary* _componentDedup;

}

@property (nonatomic,retain) NSMutableDictionary * generatorLookup;              //@synthesize generatorLookup=_generatorLookup - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * componentDedup;               //@synthesize componentDedup=_componentDedup - In the implementation block
@property (nonatomic,readonly) NSSet * components; 
@property (nonatomic,readonly) NSSet * generators; 
@property (nonatomic,readonly) Class extensionClass; 
@property (nonatomic,readonly) Class responseObjectClass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)components;
-(id)init;
-(NSSet *)generators;
-(NSMutableDictionary *)generatorLookup;
-(NSMutableDictionary *)componentDedup;
-(void)addExtensionAdapter:(id)arg1 ;
-(void)enumerateExtensionAdaptersWithBlock:(/*^block*/id)arg1 ;
-(Class)extensionClass;
-(Class)responseObjectClass;
-(id)generatorForComponentIdentity:(id)arg1 ;
-(void)setGeneratorLookup:(NSMutableDictionary *)arg1 ;
-(void)setComponentDedup:(NSMutableDictionary *)arg1 ;
@end
