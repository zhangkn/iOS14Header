/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/AFDictionaryConvertible.h>

@class NSString;

@interface AFPeerInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible> {

	BOOL _isDeviceOwnedByCurrentUser;
	BOOL _isCommunalDevice;
	NSString* _idsIdentifier;
	NSString* _idsDeviceUniqueIdentifier;
	NSString* _rapportEffectiveIdentifier;
	NSString* _mediaSystemIdentifier;
	NSString* _mediaRouteIdentifier;
	NSString* _roomName;
	NSString* _name;
	NSString* _productType;
	NSString* _buildVersion;
	NSString* _userInterfaceIdiom;
	NSString* _aceVersion;

}

@property (nonatomic,readonly) BOOL isDeviceOwnedByCurrentUser;                         //@synthesize isDeviceOwnedByCurrentUser=_isDeviceOwnedByCurrentUser - In the implementation block
@property (nonatomic,copy,readonly) NSString * idsIdentifier;                           //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * idsDeviceUniqueIdentifier;               //@synthesize idsDeviceUniqueIdentifier=_idsDeviceUniqueIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * rapportEffectiveIdentifier;              //@synthesize rapportEffectiveIdentifier=_rapportEffectiveIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaSystemIdentifier;                   //@synthesize mediaSystemIdentifier=_mediaSystemIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaRouteIdentifier;                    //@synthesize mediaRouteIdentifier=_mediaRouteIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isCommunalDevice;                                   //@synthesize isCommunalDevice=_isCommunalDevice - In the implementation block
@property (nonatomic,copy,readonly) NSString * roomName;                                //@synthesize roomName=_roomName - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * productType;                             //@synthesize productType=_productType - In the implementation block
@property (nonatomic,copy,readonly) NSString * buildVersion;                            //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * userInterfaceIdiom;                      //@synthesize userInterfaceIdiom=_userInterfaceIdiom - In the implementation block
@property (nonatomic,copy,readonly) NSString * aceVersion;                              //@synthesize aceVersion=_aceVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(NSString *)userInterfaceIdiom;
-(id)initWithIsDeviceOwnedByCurrentUser:(BOOL)arg1 idsIdentifier:(id)arg2 idsDeviceUniqueIdentifier:(id)arg3 rapportEffectiveIdentifier:(id)arg4 mediaSystemIdentifier:(id)arg5 mediaRouteIdentifier:(id)arg6 isCommunalDevice:(BOOL)arg7 roomName:(id)arg8 name:(id)arg9 productType:(id)arg10 buildVersion:(id)arg11 userInterfaceIdiom:(id)arg12 aceVersion:(id)arg13 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)ad_shortDescription;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(NSString *)productType;
-(BOOL)isCommunalDevice;
-(NSString *)aceVersion;
-(BOOL)isDeviceOwnedByCurrentUser;
-(NSString *)rapportEffectiveIdentifier;
-(NSString *)idsDeviceUniqueIdentifier;
-(NSString *)mediaRouteIdentifier;
-(NSString *)roomName;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)idsIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)mediaSystemIdentifier;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)buildDictionaryRepresentation;
-(NSString *)name;
-(NSString *)buildVersion;
-(NSString *)description;
@end

