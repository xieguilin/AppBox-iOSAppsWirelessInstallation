///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGDataPlacementRestrictionSatisfyPolicyDetails;
@class DBTEAMLOGPlacementRestriction;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `DataPlacementRestrictionSatisfyPolicyDetails` struct.
///
/// Completed restrictions on data center locations where team data resides.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGDataPlacementRestrictionSatisfyPolicyDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Placement restriction.
@property (nonatomic, readonly) DBTEAMLOGPlacementRestriction *placementRestriction;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param placementRestriction Placement restriction.
///
/// @return An initialized instance.
///
- (instancetype)initWithPlacementRestriction:(DBTEAMLOGPlacementRestriction *)placementRestriction;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the
/// `DataPlacementRestrictionSatisfyPolicyDetails` struct.
///
@interface DBTEAMLOGDataPlacementRestrictionSatisfyPolicyDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGDataPlacementRestrictionSatisfyPolicyDetails`
/// instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGDataPlacementRestrictionSatisfyPolicyDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGDataPlacementRestrictionSatisfyPolicyDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGDataPlacementRestrictionSatisfyPolicyDetails *)instance;

///
/// Deserializes `DBTEAMLOGDataPlacementRestrictionSatisfyPolicyDetails`
/// instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGDataPlacementRestrictionSatisfyPolicyDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGDataPlacementRestrictionSatisfyPolicyDetails` object.
///
+ (DBTEAMLOGDataPlacementRestrictionSatisfyPolicyDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END