//
// message_element_impl.cpp
//
// This file is part of the BMW Some/IP implementation.
//
// Copyright © 2013, 2014 Bayerische Motoren Werke AG (BMW).
// All rights reserved.
//

#include <vsomeip_internal/sd/message_element_impl.hpp>

namespace vsomeip {
namespace sd {

message_element_impl::message_element_impl() {
	owner_ = 0;
}

message_impl * message_element_impl::get_owning_message() const {
	return owner_;
}

void message_element_impl::set_owning_message(message_impl *_owner) {
	owner_ = _owner;
}

} // namespace sd
} // namespace vsomeip