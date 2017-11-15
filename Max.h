#pragma once

template<typename T>
T Max(T a, T b, T c)
{
	if (b > a)
	{
		if (b > c)
			return b;
		return a;
	}
	if (c > a)
		return c;
	return a;
}
