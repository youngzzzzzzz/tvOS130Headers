/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/NSCoding.h>
#import <MediaPlayer/NSSecureCoding.h>

@class NSString;

@interface MPModelKind : NSObject <NSCoding, NSSecureCoding> {

	Class _modelClass;

}

@property (nonatomic,readonly) Class modelClass;                         //@synthesize modelClass=_modelClass - In the implementation block
@property (nonatomic,readonly) NSString * humanDescription; 
@property (nonatomic,readonly) MPModelKind * identityKind; 
+(BOOL)supportsSecureCoding;
+(id)identityKind;
+(id)kindWithModelClass:(Class)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSString *)humanDescription;
-(MPModelKind *)identityKind;
-(shared_ptr<mlcore::Predicate>*)predicateWithBaseProperty:(ModelPropertyBase*)arg1 ;
-(void)applyToView:(shared_ptr<mlcore::LibraryView>*)arg1 withContext:(id)arg2 ;
-(shared_ptr<mlcore::Predicate>*)representedSearchScopePredicate;
-(Class)modelClass;
@end

