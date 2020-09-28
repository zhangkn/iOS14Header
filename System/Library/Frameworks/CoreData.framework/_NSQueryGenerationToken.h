/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSQueryGenerationToken.h>

@class NSString, _PFWeakReference;

@interface _NSQueryGenerationToken : NSQueryGenerationToken {

	NSString* _storeIdentifier;
	_PFWeakReference* _store;
	id _generationIdentifier;
	struct {
		unsigned _isCompound : 1;
		unsigned _isSingleton : 1;
		unsigned _freeValueOnDealloc : 1;
		unsigned _isUnmoored : 1;
		unsigned _reservedFlags : 12;
	}  _flags;

}
+(BOOL)supportsSecureCoding;
-(id)persistentStoreCoordinator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)autorelease;
-(oneway void)release;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)retain;
-(id)description;
@end
