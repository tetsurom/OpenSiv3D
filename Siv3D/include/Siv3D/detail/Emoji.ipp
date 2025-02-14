﻿//-----------------------------------------------
//
//	This file is part of the Siv3D Engine.
//
//	Copyright (c) 2008-2021 Ryo Suzuki
//	Copyright (c) 2016-2021 OpenSiv3D Project
//
//	Licensed under the MIT License.
//
//-----------------------------------------------

# pragma once

namespace s3d
{
	inline Emoji::Emoji(const char32* emoji) noexcept
		: codePoints{ emoji } {}

	inline Emoji::Emoji(const StringView emoji) noexcept
		: codePoints{ emoji } {}

	inline Emoji::Emoji(String emoji) noexcept
		: codePoints{ std::move(emoji) } {}
}
